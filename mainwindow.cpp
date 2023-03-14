#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->QuantitySlider, SIGNAL(valueChanged(int)), ui->QuantityText, SLOT(setNum(int)));
    connect(ui->AddRecipeBtn, SIGNAL(clicked(bool)), this, SLOT(SlotAddNewRecipe()));
}

void MainWindow::SlotAddNewRecipe(){
    QString recipeName = ui->RecipeInput->text();
    QString flavor;
    if(ui->Salty->isChecked()){
        flavor = "Salty";
    }else if(ui->Sweet->isChecked()){
        flavor = "Sweet";
    }else{
        flavor = "Spicy";
    }

    double qty = ui->QuantitySlider->value();

    QString required;
    if(ui->RequiredCB->isChecked()){
        required = "Must be included";
    }else{
        required = "Can be avoided";
    }

    QVBoxLayout* vMainLayout = qobject_cast<QVBoxLayout*>(ui->AllRecipeLayout->layout());

    QFrame* Hframe = new QFrame();
    Hframe->setFrameStyle(QFrame::StyledPanel);

    QHBoxLayout* newRecipeFrame= new QHBoxLayout(Hframe);
    Hframe->setLayout(newRecipeFrame);

    //change one of the qty to flavor
    QString RecipeDetails = "Recipe: " + recipeName + "\tQuantity(in mg): " + QString::number(qty) +  "\nFlavor: " + flavor + "\n" + required;

    QLabel* newRecipeLabel = new QLabel(RecipeDetails);
    newRecipeFrame->addWidget(newRecipeLabel);

    QPushButton* deleteBtn = new QPushButton("Delete");
    deleteBtn->setFixedSize(QSize(65,25));
    newRecipeFrame->addWidget(deleteBtn);
    deleteBtn->setProperty("CurrentRecipe", QVariant(QVariant::fromValue<QFrame*>(Hframe)));

    connect(deleteBtn, SIGNAL(clicked()), this, SLOT(SlotDeleteRecipe()));


    vMainLayout->insertWidget(0,Hframe);
}


void MainWindow::SlotDeleteRecipe() {

    QPushButton* fromButton = (QPushButton*)sender();

    QVariant var;
    var = fromButton->property("CurrentRecipe");
    QFrame* recipeHBox = qvariant_cast<QFrame*>(var);

    recipeHBox->deleteLater();
    delete recipeHBox;

}

MainWindow::~MainWindow()
{
    delete ui;
}
