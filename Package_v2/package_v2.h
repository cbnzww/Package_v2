#ifndef PACKAGE_V2_H
#define PACKAGE_V2_H

#include <QtWidgets/QWidget>
#include "ui_package_v2.h"

class Package_v2 : public QWidget
{
	Q_OBJECT

public:
	Package_v2(QWidget *parent = 0);
	~Package_v2();

	//创建文件夹
	bool Create_Dir(const QString &path);

	//拷贝文件夹
	bool Copy_Dir(const QString &fromDir, const QString &toDir, bool coverFileIfExist);

	//拷贝文件
	bool Copy_File(QString sourceDir, QString toDir, bool coverFileIfExist);

	//替换需要修改的文件
	bool Replace_File(const QString &frompath, const QString & topath);

	//解压jar包
	bool Unjar_File();

	//压缩jar包
	bool Jar_File();

	//删除jar包中的文件
	bool Remove_InJarFile();

	//压缩zip包
	bool Zip_Dir();

private:
	Ui::Package_v2Class ui;
};

#endif // PACKAGE_V2_H
