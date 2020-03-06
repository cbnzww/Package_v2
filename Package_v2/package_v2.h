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

	//�����ļ���
	bool Create_Dir(const QString &path);

	//�����ļ���
	bool Copy_Dir(const QString &fromDir, const QString &toDir, bool coverFileIfExist);

	//�����ļ�
	bool Copy_File(QString sourceDir, QString toDir, bool coverFileIfExist);

	//�滻��Ҫ�޸ĵ��ļ�
	bool Replace_File(const QString &frompath, const QString & topath);

	//��ѹjar��
	bool Unjar_File();

	//ѹ��jar��
	bool Jar_File();

	//ɾ��jar���е��ļ�
	bool Remove_InJarFile();

	//ѹ��zip��
	bool Zip_Dir();

private:
	Ui::Package_v2Class ui;
};

#endif // PACKAGE_V2_H
