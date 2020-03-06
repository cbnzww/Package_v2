#include "stdafx.h"
#include "package_v2.h"

Package_v2::Package_v2(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//创建第一级目录
	Create_Dir("D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0");


	//创建第二级目录
	Create_Dir("D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\META-INF");
	Create_Dir("D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\minio_assistant_dahuasdk");
	Create_Dir("D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\script");
	Create_Dir("D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\xres-rms");
	Create_Dir("D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\xres-trigger");

	//META-INF文件操作
	Replace_File("D:\\Generate_Device_Resource_Pack_Program\\Dynamic_device_access_resource_package\\xres_resource_{1}_{2}_1.0.0\\META-INF\\packageinfo.xml",
		"D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\META-INF\\packageinfo.xml");

	//minio_assistant_{2}文件操作
	Copy_Dir("D:\\Generate_Device_Resource_Pack_Program\\Dynamic_device_access_resource_package\\xres_resource_{1}_{2}_1.0.0\\minio_assistant_{2}\\bicIdentify", 
		"D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\minio_assistant_dahuasdk\\bicIdentify", true);
	Copy_File("D:\\Generate_Device_Resource_Pack_Program\\Dynamic_device_access_resource_package\\xres_resource_{1}_{2}_1.0.0\\minio_assistant_{2}\\minio_assistant_amd64",
		"D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\minio_assistant_dahuasdk\\minio_assistant_amd64", true);
	Copy_File("D:\\Generate_Device_Resource_Pack_Program\\Dynamic_device_access_resource_package\\xres_resource_{1}_{2}_1.0.0\\minio_assistant_{2}\\minio_assistant_arm8_huawei",
		"D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\minio_assistant_dahuasdk\\minio_assistant_arm8_huawei", true);
	Copy_File("D:\\Generate_Device_Resource_Pack_Program\\Dynamic_device_access_resource_package\\xres_resource_{1}_{2}_1.0.0\\minio_assistant_{2}\\upload_2_minio.sh",
		"D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\minio_assistant_dahuasdk\\upload_2_minio.sh", true);
	Replace_File("D:\\Generate_Device_Resource_Pack_Program\\Dynamic_device_access_resource_package\\xres_resource_{1}_{2}_1.0.0\\minio_assistant_{2}\\minio_upload.xml",
		"D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\minio_assistant_dahuasdk\\minio_upload.xml");
	
	//script文件操作
	Replace_File("D:\\Generate_Device_Resource_Pack_Program\\Dynamic_device_access_resource_package\\xres_resource_{1}_{2}_1.0.0\\script\\install.sh",
		"D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\script\\install.sh");

	//xres-rms文件操作
	Create_Dir("D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\xres-rms\\config");
	Create_Dir("D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\xres-rms\\expand");
	Create_Dir("D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\xres-rms\\config\\menumanufacturer");
	Replace_File("D:\\Generate_Device_Resource_Pack_Program\\Dynamic_device_access_resource_package\\xres_resource_{1}_{2}_1.0.0\\xres-rms\\expand\\data_dicts_xres_{2}_en_US.properties",
		"D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\xres-rms\\expand\\data_dicts_xres_dahuasdk_en_US.properties");
	Replace_File("D:\\Generate_Device_Resource_Pack_Program\\Dynamic_device_access_resource_package\\xres_resource_{1}_{2}_1.0.0\\xres-rms\\expand\\data_dicts_xres_{2}_zh_CN.properties",
		"D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\xres-rms\\expand\\data_dicts_xres_dahuasdk_zh_CN.properties");
	Replace_File("D:\\Generate_Device_Resource_Pack_Program\\Dynamic_device_access_resource_package\\xres_resource_{1}_{2}_1.0.0\\xres-rms\\config\\menumanufacturer\\menu_manufacturer_{2}.xml",
		"D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\xres-rms\\config\\menumanufacturer\\menu_manufacturer_dahuasdk.xml");
	Replace_File("D:\\Generate_Device_Resource_Pack_Program\\Dynamic_device_access_resource_package\\xres_resource_{1}_{2}_1.0.0\\xres-rms\\expand\\data_dicts_xres_{2}.xml",
		"D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\xres-rms\\expand\\data_dicts_xres_dahuasdk.xml");
	
	//xres-trigger文件操作
	Create_Dir("D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\xres-trigger\\config");
	Create_Dir("D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\xres-trigger\\lib");
	Create_Dir("D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\xres-trigger\\config\\iconfig");
	Create_Dir("D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\xres-trigger\\config\\iconfig\\protocol");
	Replace_File("D:\\Generate_Device_Resource_Pack_Program\\Dynamic_device_access_resource_package\\xres_resource_{1}_{2}_1.0.0\\xres-trigger\\config\\iconfig\\protocol\\manufacturer_protocol_{2}.xml",
		"D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\xres-trigger\\config\\iconfig\\protocol\\manufacturer_protocol_dahuasdk.xml");
	Unjar_File();
	Replace_File("D:\\Generate_Device_Resource_Pack_Program\\Package_v2\\Package_v2\\treate-type-common.properties",
		"D:\\Generate_Device_Resource_Pack_Program\\Package_v2\\jar\\treate-type-common.properties");
	Copy_File("D:\\Generate_Device_Resource_Pack_Program\\Package_v2\\jar\\treate-type-common.properties",
		"D:\\Generate_Device_Resource_Pack_Program\\Package_v2\\Package_v2\\treate-type-common.properties", true);
	Jar_File();
	Remove_InJarFile();
	Copy_File("D:\\Generate_Device_Resource_Pack_Program\\Package_v2\\Package_v2\\xres-resource-acess-dahuasdk-1.0-SNAPSHOT.jar",
		"D:\\Generate_Device_Resource_Pack_Program\\xres_resource_dhsdk_net_dahuasdk_1.0.0\\xres-trigger\\lib\\xres-resource-acess-dahuasdk-1.0-SNAPSHOT.jar", true);
	Zip_Dir();
	

}

Package_v2::~Package_v2()
{

}

bool Package_v2::Create_Dir(const QString &path)
{
	QDir dir(path);
	if (!dir.exists()) 
	{
		if (!dir.mkpath(path))
		{
			qDebug() << "Create path fail" << endl;
			return false;
		}
		else
		{
			qDebug() << "Create path success" << endl;
			return true;
		}
	}
	else 
	{
		qDebug() << "path exist" << endl;
		return false;
	}
}

bool Package_v2::Copy_Dir(const QString & fromDir, const QString & toDir, bool coverFileIfExist)
{
	QDir sourceDir(fromDir);
	QDir targetDir(toDir);
	if (!targetDir.exists()) 
	{    
		/* 如果目标目录不存在，则进行创建 */
		if (!targetDir.mkdir(targetDir.absolutePath()))
		{
			return false;
		}
	}

	QFileInfoList fileInfoList = sourceDir.entryInfoList();
	foreach(QFileInfo fileInfo, fileInfoList) 
	{
		if (fileInfo.fileName() == "." || fileInfo.fileName() == "..")
		{
			continue;

		}
		if (fileInfo.isDir()) 
		{    /* 当为目录时，递归的进行copy */
			if (!Copy_Dir(fileInfo.filePath(), targetDir.filePath(fileInfo.fileName()), coverFileIfExist))
			{
				return false;
			}
		}
		else 
		{            
			/* 当允许覆盖操作时，将旧文件进行删除操作 */
			if (coverFileIfExist && targetDir.exists(fileInfo.fileName())) 
			{
				targetDir.remove(fileInfo.fileName());
			}
			/* 进行文件copy */
			if (!QFile::copy(fileInfo.filePath(), targetDir.filePath(fileInfo.fileName()))) 
			{
				return false;
			}
		}
	}
	return true;
}

bool Package_v2::Copy_File(QString sourceDir, QString toDir, bool coverFileIfExist)
{
	toDir.replace("\\", "/");
	if (sourceDir == toDir) 
	{
		return true;
	}
	if (!QFile::exists(sourceDir)) 
	{
		return false;
	}
	QDir *createfile = new QDir;
	bool exist = createfile->exists(toDir);
	if (exist) 
	{
		if (coverFileIfExist) 
		{
			createfile->remove(toDir);
		}
	}//end if

	if (!QFile::copy(sourceDir, toDir))
	{
		return false;
	}
	return true;
}

bool Package_v2::Replace_File(const QString & frompath, const QString & topath)
{
	QString srcData;
	QFile fromfile(frompath);
	if (!fromfile.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		return false;
	}
	QByteArray text = fromfile.readAll();
	srcData.prepend(text);
	if (srcData.contains("{1}"))
	{
		srcData.replace("{1}", "dhsdk_net");
	}
	if (srcData.contains("{2}"))
	{
		srcData.replace("{2}", "dahuasdk");
	}
	if (srcData.contains("{3}"))
	{
		const char* s = "大华";
		QString qs = QString::fromLocal8Bit(s);
		srcData.replace("{3}", qs);
	}
	if (srcData.contains("{4}"))
	{
		srcData.replace("{4}", "dahua");
	}
	if (srcData.contains("{5}"))
	{
		srcData.replace("{5}", "\"dhsdk_net\",\"onvif_net\",\"gb_reg\",\"gb35114_reg\",\"jt808_1078_reg\"");
	}
	if (srcData.contains("{6}"))
	{
		srcData.replace("{6}", "\"dhsdk_net\",\"onvif_net\",\"gb_reg\",\"gb35114_reg\"");
	}
	if (srcData.contains("{7}"))
	{
		srcData.replace("{7}", "\"dhsdk_net\",\"onvif_net\",\"gb_reg\",\"gb35114_reg\",\"jt808_1078_reg\"");
	}
	if (srcData.contains("{8}"))
	{
		const char* s = "大华SDK";
		QString qs = QString::fromLocal8Bit(s);
		srcData.replace("{8}", qs);
	}
	if (srcData.contains("{9}"))
	{
		srcData.replace("{9}", "dahua");
	}
	if (srcData.contains("{10}"))
	{
		srcData.replace("{10}", "dahua_test_support");
	}
	if (srcData.contains("{11}"))
	{
		const char* s = "测试大华能力添加";
		QString qs = QString::fromLocal8Bit(s);
		srcData.replace("{11}", qs);
	}
	if (srcData.contains("{12}"))
	{
		const char* s = "大华SDK协议";
		QString qs = QString::fromLocal8Bit(s);
		srcData.replace("{12}", qs);
	}
	if (srcData.contains("{13}"))
	{
		srcData.replace("{13}", "DaHua SDK");
	}
	if (srcData.contains("{14}"))
	{
		srcData.replace("{14}", "test dahua capability  add");
	}
	if (srcData.contains("{15}"))
	{
		srcData.replace("{15}", "false");
	}
	fromfile.close();

	QFile tofile(topath);
	if (tofile.open(QIODevice::WriteOnly))
	{
		tofile.write(srcData.toStdString().data());
		tofile.close();
		return true;
	}
	return false;
}

bool Package_v2::Unjar_File()
{
	QProcess pJar(0);
	QString strJar = "D:\\Generate_Device_Resource_Pack_Program\\Package_v2\\jar\\jar.exe xvf D:\\Generate_Device_Resource_Pack_Program\\Dynamic_device_access_resource_package\\xres_resource_{1}_{2}_1.0.0\\xres-trigger\\lib\\xres-resource-acess-{2}-1.0-SNAPSHOT.jar";
	pJar.start(strJar);
	pJar.waitForStarted();
	pJar.waitForFinished();
	return true;
}

bool Package_v2::Jar_File()
{
	QProcess pJar(0);
	QString strJar = "D:\\Generate_Device_Resource_Pack_Program\\Package_v2\\jar\\jar.exe cf xres-resource-acess-dahuasdk-1.0-SNAPSHOT.jar treate-type-common.properties";
	pJar.start(strJar);
	pJar.waitForStarted();
	pJar.waitForFinished();
	return true;
}

bool Package_v2::Remove_InJarFile()
{
	QProcess pJar(0);
	QString strJar = "D:\\Generate_Device_Resource_Pack_Program\\Package_v2\\jar\\7za.exe d xres-resource-acess-dahuasdk-1.0-SNAPSHOT.jar /META-INF";
	pJar.start(strJar);
	pJar.waitForStarted();
	pJar.waitForFinished();
	return true;
}

bool Package_v2::Zip_Dir()
{
	QProcess pJar(0);
	QString strJar = "D:\\Generate_Device_Resource_Pack_Program\\Package_v2\\jar\\7za.exe a xres_resource_dhsdk_net_dahuasdk_1.0.0.zip xres_resource_dhsdk_net_dahuasdk_1.0.0";
	pJar.start(strJar);
	pJar.waitForStarted();
	pJar.waitForFinished();
	return true;
}
