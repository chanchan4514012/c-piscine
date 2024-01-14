/*strcmp และ strncmp เป็นฟังก์ชั่นที่ใช้ในภาษา C เพื่อเปรียบเทียบสตริง (strings) 
ซึ่งเป็นลำดับของตัวอักษรที่เรียงต่อกันในหนึ่งตัวแปร array ใน C สตริงจะถูกประกาศเป็น array ของ char.

strcmp (String Compare):

การใช้งาน: int strcmp(const char *str1, const char *str2);
คำอธิบาย: strcmp ใช้เพื่อเปรียบเทียบสตริง str1 และ str2. ถ้าสตริงเหล่านี้เหมือนกัน, 
ฟังก์ชั่นจะคืนค่า 0. ถ้า str1 มากกว่า str2, ฟังก์ชั่นจะคืนค่าบวก. ถ้า str1 น้อยกว่า str2, ฟังก์ชั่นจะคืนค่าลบ.
ตัวอย่าง:

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "world";

    int result = strcmp(str1, str2);

    if (result == 0)
        printf("The strings are equal.\n");
    else if (result < 0)
        printf("str1 is less than str2.\n");
    else
        printf("str1 is greater than str2.\n");

    return 0;
}

ผลลัพธ์:

str1 is less than str2.

strncmp (String Compare with Limited Length):

การใช้งาน: int strncmp(const char *str1, const char *str2, size_t n);
คำอธิบาย: strncmp ใช้เพื่อเปรียบเทียบสตริง str1 และ str2 แต่เฉพาะตัวอักษรแรก n ตัว. 
ถ้าสตริงเหล่านี้เหมือนกัน, ฟังก์ชั่นจะคืนค่า 0. ถ้า str1 มากกว่า str2, ฟังก์ชั่นจะคืนค่าบวก. ถ้า str1 น้อยกว่า str2, ฟังก์ชั่นจะคืนค่าลบ.
ตัวอย่าง:
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "helloworld";

    int result = strncmp(str1, str2, 5); // เปรียบเทียบเพียง 5 ตัวแรก

    if (result == 0)
        printf("The first 5 characters are equal.\n");
    else if (result < 0)
        printf("The first 5 characters of str1 are less than str2.\n");
    else
        printf("The first 5 characters of str1 are greater than str2.\n");

    return 0;
}

ผลลัพธ์:

The first 5 characters are equal.

ในทั้งสองกรณี, การเปรียบเทียบทำตามลำดับ ASCII ของตัวอักษรในสตริง 
โดยการเปรียบเทียบถูกทำตั้งแต่ตัวอักษรแรกไปจนถึงตัวอักษรสุดท้ายหรือตัวอักษรที่กำหนดไว้ใน strncmp */