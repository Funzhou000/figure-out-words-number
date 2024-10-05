#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//使用strlen 要包含这个
//ASCII编码：一个英文字母（不分大小写）占一个字节的空间，一个中文汉字占两个字节的空间1。
//UTF - 8编码：一个英文字符等于一个字节，一个中文（含繁体）等于三个字节1。
//
//int main() {
//    char english[10000]; // 定义字符数组
//    printf("请输入eng：");
//    scanf("%s", english);       // 读取字符串，scanf 读取字符串时需要一个字符数组的地址。
//                               //在C语言中，scanf 函数读取字符串时会将空格视为输入结束的标志。
//                              //因此，当你输入 sss sss 时，scanf 只会读取第一个 sss，并忽略后面的部分。
//    int len = strlen(english); // 计算字符串长度
//    printf("输入的eng长度为：%d\n", len);
//
//    return 0;


int main() {
    char english[1000]; // 定义更大的字符数组
    printf("请输入英语：");
    fgets(english , sizeof(english), stdin); // 读取包含空格的字符串 fgets会输入回车即/n
    english[strcspn(english, "\n")] = '\0';
// 去除换行符
       /* strcspn 函数会返回 english 字符串中第一个出现的 \n 的位置。
        例如，如果 english 是 "Hello\nWorld", strcspn(english, "\n") 将返回 5，因为 \n 是第六个字符（从 0 开始计数）。
        english[strcspn(english, "\n")]：
        这部分代码使用 strcspn 返回的索引来访问 english 字符串中第一个 \n 的位置。
        继续上面的例子，这部分代码相当于 english[5]。
        = '\0'：
        将 english 字符串中第一个 \n 替换为字符串结束符 \0。
        这样，english 字符串在第一个 \n 处被截断，变成 "Hello"。
    
    */
    // 去除换行符
  
    int len = strlen(english); // 计算字符串长度
    printf("一共有 %d 个字母\n", len);

    return 0;
}
