#ifndef PROJECTDOC_H
#define PROJECTDOC_H

#include <QObject>
#include "manuscriptdoc.h"

class ProjectDoc : public QObject
{
	Q_OBJECT

public:
	ProjectDoc(QObject *parent);
	~ProjectDoc();
	void addManuscript(ManuscriptDoc* manuscript);

private:
	QVector<ManuscriptDoc*>* _manuscripts; 
};

#endif // PROJECTDOC_H
