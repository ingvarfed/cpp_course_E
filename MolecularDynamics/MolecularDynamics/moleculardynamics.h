#ifndef MOLECULARDYNAMICS_H
#define MOLECULARDYNAMICS_H

#include <QtWidgets/QMainWindow>
#include "ui_moleculardynamics.h"

class MolecularDynamics : public QMainWindow
{
	Q_OBJECT

public:
	MolecularDynamics(QWidget *parent = 0);
	~MolecularDynamics();

private:
	Ui::MainWindow ui;
};

#endif // MOLECULARDYNAMICS_H
