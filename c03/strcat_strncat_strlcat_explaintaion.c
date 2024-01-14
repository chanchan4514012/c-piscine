
/*strcat, strncat, และ strlcat เป็นฟังก์ชั่นที่ใช้ในภาษา C สำหรับการเชื่อมต่อ 
(concatenate) สตริง (strings) ซึ่งเป็นลำดับของตัวอักษรที่เรียงต่อกันในหนึ่งตัวแปร array. 
ตัวอักษรสุดท้ายของสตริงจะเป็นตัวอักษร null ('\0') เพื่อระบุจุดสิ้นสุดของสตริง.

strcat (String Concatenate):

การใช้งาน: char *strcat(char *dest, const char *src);
คำอธิบาย: strcat ใช้เพื่อเชื่อมต่อสตริง src ไปที่สตริง dest. สตริง src จะถูกเพิ่มไปที่ท้ายของสตริง dest 
โดยที่ตัวอักษร null ของ dest จะถูกแทนที่ด้วยตัวอักษรแรกของ src. ตัวแปร dest จะต้องมีพื้นที่เพียงพอในการรับสตริง src 
และต้องมีตัวอักษร null ด้วย.

ตัวอย่าง:

#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = "Hello";
    char src[] = " World";

    strcat(dest, src);

    printf("Concatenated string: %s\n", dest);

    return 0;
}
ผลลัพธ์:

Concatenated string: Hello World

strncat (String Concatenate with Limited Length):

การใช้งาน: char *strncat(char *dest, const char *src, size_t n);
คำอธิบาย: strncat ใช้เพื่อเชื่อมต่อสตริง src ไปที่สตริง dest แต่จำกัดจำนวนตัวอักษรที่ถูกเพิ่มไปที่ dest ถึง n ตัวอักษร. 
ตัวแปร dest จะต้องมีพื้นที่เพียงพอในการรับสตริง src และต้องมีตัวอักษร null ด้วย.

ตัวอย่าง:

#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = "Hello";
    char src[] = " World";

    strncat(dest, src, 3); // เพิ่มเพียง 3 ตัวแรกของ src

    printf("Concatenated string: %s\n", dest);

    return 0;
}

ผลลัพธ์:

Concatenated string: Hello Wor

strlcat (String Length Concatenate):

การใช้งาน: size_t strlcat(char *dest, const char *src, size_t size);
คำอธิบาย: strlcat ใช้เพื่อเชื่อมต่อสตริง src ไปที่สตริง dest และคืนค่าขนาดทั้งหมดของสตริงที่คำนวณได้ 
(ไม่รวมตัวอักษร null ที่ถูกเพิ่ม). ต่างจาก strcat และ strncat, strlcat ไม่ทำการเพิ่มตัวอักษร null 
ลงในตำแหน่งสุดท้ายของ dest ถ้าพื้นที่ไม่เพียงพอ.

ตัวอย่าง:

#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = "Hello";
    char src[] = " World";

    size_t total_length = strlcat(dest, src, sizeof(dest));

    printf("Concatenated string: %s\n", dest);
    printf("Total length: %zu\n", total_length);

    return 0;
}
ผลลัพธ์:

Concatenated string: Hello World
Total length: 11


คำเตือน: เมื่อใช้ฟังก์ชั่นเช่น strcat หรือ strncat, ผู้ใช้ต้องรักษาความระมัดระวังในการควบคุมขนาดของอาร์เรย์เพื่อป้องกันการเกินขอบเขต 
(buffer overflow) ซึ่งอาจทำให้เกิดปัญหาความปลอดภัยในโปรแกรม C */