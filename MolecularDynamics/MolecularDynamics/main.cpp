#include "moleculardynamics.h"
#include <QtWidgets/QApplication>
#include "DocumentObject.h"
#include "DocProjectObject.h"
#include "DocParticle.h"
#include "DocBoundingBox.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MolecularDynamics w;
	w.show();
	return a.exec();
}
