#ifndef _LOG_
#define _LOG_

#include "stdio.h"
#include "stdlib.h"

//颜色的宏定义
#define NONE      "\e[0m"	//消除颜色
#define LOG_RED_H "\e[1;31m"	//亮红色
#define LOG_RED_L	"\e[0;31m"	//暗红色
#define LOG_GREEN_H "\e[1;32m"
#define LOG_GREEN_L	"\e[0;32m"
#define LOG_YELLOW_H "\e[1;33m"
#define LOG_YELLOW_L	"\e[0;33m"



#define LOGI(fmt,agr...)	\
do	\
{	\
	printf("%s info >> file:%s; line:%d; fuction:%s :",LOG_GREEN_H,__FILE__,__LINE__,__FUNCTION__);	\
	printf(fmt,##agr);	\
	printf("%s \r\n",NONE);	\
}while(0)

#define LOGW(fmt,agr...)	\
do	\
{	\
	printf("%s warn >> file:%s; line:%d; fuction:%s :",LOG_YELLOW_L,__FILE__,__LINE__,__FUNCTION__);	\
	printf(fmt,##agr);	\
	printf("%s \r\n",NONE);	\
}while(0)

#define LOGE(fmt,agr...)	\
do	\
{	\
	printf("%s error >> file:%s; line:%d; fuction:%s :",LOG_RED_H,__FILE__,__LINE__,__FUNCTION__);	\
	printf(fmt,##agr);	\
	printf("%s \r\n",NONE);	\
}while(0)


#endif



