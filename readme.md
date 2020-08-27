# c语言打印



### 打印三种不同颜色的数据：

LOGI 打印数据信息，绿色

LOGW 打印警告信息，黄色

LOGE 打印错误信息，红色

**同时可以打印出当前的文件，代码行数，函数名称,调试时将LOG_ENABLE 设为1，正式发布时为0 关闭打印**

#### 示例 LOGI("Hellow world,I am %d years old",3);