#ifndef HDAMAINFRAME_H
#define HDAMAINFRAME_H
#pragma once

#include <QtGui/QMainWindow>
#include <QString>
#include <QMutex>

#include "ui_hdamainframe.h"
#include "FlowSchedulerDialog.h"
#include "thumbnailsmodel.h"
#include "treeviewmodel.h"
#include "manuscriptpropertiesmodel.h"
#include "manuscriptpropertiesdelegate.h"
#include "pagemdichild.h"
#include "xmlreader.h"
#include "gui_global.h"
#include "HdaFlowManager.h"

class FlowSchedulerDialog;

class GUI_EXPORT HdaMainFrame : public QMainWindow
{
	Q_OBJECT

public:
	HdaMainFrame(QWidget *parent = 0, Qt::WFlags flags = 0);
	HdaFlowManager* getFlowManager();
	~HdaMainFrame();

public slots:
	void LoadManuscript(QModelIndex index);
	void openImageWindowFromThumbView(QModelIndex index);
	void openImageWindowFromTreeView(QModelIndex index);

	//Actions slots 
	void binarize();
	void openProject();	
	void openManuscript();
	void createNewManuscript();
	void addNewManuscript();
	void removeManuscript();
	void addManuscript();
	void addPage();
	void removePage();
	void save();
	void saveAll();
	void quit();
	void help();
	void setChiledToOriginalSize();
	void cascadePages();
	void tilePages();
	void openFlowDialog();	
	void openProperties(QModelIndex);
	void openDiff();
	void drawRectangle();
	void callWordDetector();
	void drawPolygon(bool start);
	void deleteFrame();
	void showFrames(bool show);
	void rectToPoly();
	void deletePolyPoint();
	void saveAndReload();

private:
	Ui::HdaMainFrameClass ui;
	FlowSchedulerDialog* _flowSchedulerDialog;
	ProjectDoc _project;
	ThumbNailsModel* _manuscriptPagesModel;
	TreeViewModel* _manuscriptTreeModel;	
	ManuscriptPropertiesModel* _manuscriptPropertiesModel;
	ManuscriptPropertiesDelegate* _manuscriptPropertiesDelegete;
	HdaFlowManager* _flowManager;
	QString _filename;
	QMutex _lock;
	

private: //methods
	void openProject(QString filename);
	void modelsInit();
	void cleanProject();
	void saveProject();
	void saveProjectAs();
	void saveManuscript(QString path,QString manName);

signals:
	void updateFlowDialogTree(TreeViewModel*);
};

#endif // HDAMAINFRAME_H
