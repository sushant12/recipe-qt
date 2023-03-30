#ifndef EDITRECIPEWINDOW_H
#define EDITRECIPEWINDOW_H

#include <QDialog>

#include "recipe.h"

namespace Ui {
  class EditRecipeWindow;
}

class EditRecipeWindow: public QDialog {
  Q_OBJECT

  public:
    explicit EditRecipeWindow(QWidget * parent = nullptr);
  ~EditRecipeWindow();
  void setup(Recipe * a);

  private slots:
    void on_pushButton_clicked();

  void on_TimeToCook_actionTriggered(int action);

  private:
    Ui::EditRecipeWindow * ui;

  signals:
    void recipeEdited(Recipe * );
};

#endif // EDITRECIPEWINDOW_H