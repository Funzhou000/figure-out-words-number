#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//ʹ��strlen Ҫ�������
//ASCII���룺һ��Ӣ����ĸ�����ִ�Сд��ռһ���ֽڵĿռ䣬һ�����ĺ���ռ�����ֽڵĿռ�1��
//UTF - 8���룺һ��Ӣ���ַ�����һ���ֽڣ�һ�����ģ������壩���������ֽ�1��
//
//int main() {
//    char english[10000]; // �����ַ�����
//    printf("������eng��");
//    scanf("%s", english);       // ��ȡ�ַ�����scanf ��ȡ�ַ���ʱ��Ҫһ���ַ�����ĵ�ַ��
//                               //��C�����У�scanf ������ȡ�ַ���ʱ�Ὣ�ո���Ϊ��������ı�־��
//                              //��ˣ��������� sss sss ʱ��scanf ֻ���ȡ��һ�� sss�������Ժ���Ĳ��֡�
//    int len = strlen(english); // �����ַ�������
//    printf("�����eng����Ϊ��%d\n", len);
//
//    return 0;


int main() {
    char english[1000]; // ���������ַ�����
    printf("������Ӣ�");
    fgets(english , sizeof(english), stdin); // ��ȡ�����ո���ַ��� fgets������س���/n
    english[strcspn(english, "\n")] = '\0';
// ȥ�����з�
       /* strcspn �����᷵�� english �ַ����е�һ�����ֵ� \n ��λ�á�
        ���磬��� english �� "Hello\nWorld", strcspn(english, "\n") ������ 5����Ϊ \n �ǵ������ַ����� 0 ��ʼ��������
        english[strcspn(english, "\n")]��
        �ⲿ�ִ���ʹ�� strcspn ���ص����������� english �ַ����е�һ�� \n ��λ�á�
        ������������ӣ��ⲿ�ִ����൱�� english[5]��
        = '\0'��
        �� english �ַ����е�һ�� \n �滻Ϊ�ַ��������� \0��
        ������english �ַ����ڵ�һ�� \n �����ضϣ���� "Hello"��
    
    */
    // ȥ�����з�
  
    int len = strlen(english); // �����ַ�������
    printf("һ���� %d ����ĸ\n", len);

    return 0;
}
