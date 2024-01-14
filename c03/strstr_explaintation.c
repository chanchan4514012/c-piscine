/*#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

ฟังก์ชั่น ft_strstr นี้เป็นฟังก์ชั่นที่เขียนด้วยภาษา C เพื่อค้นหา substring ใน string โดยทำหน้าที่คล้ายกับฟังก์ชั่น 
strstr ในภาษา C standard library. ฟังก์ชั่นนี้มีการค้นหา substring (to_find) ใน string (str) 
และคืนค่าเป็น pointer ที่ชี้ไปที่ตำแหน่งแรกของ substring ที่พบ หรือคืนค่า 0 ถ้าไม่พบ substring.

ต่อไปนี้คืออธิบายขั้นตอนและการทำงานของฟังก์ชั่น ft_strstr:

กำหนดตัวแปร:

i และ j เป็นตัวแปรช่วยในการวนลูปและเข้าถึงตัวอักษรใน str และ to_find ตามลำดับ.
ตรวจสอบกรณีพิเศษ:

ตรวจสอบว่าตัวอักษรแรกของ to_find เป็นตัว null ('\0') หรือไม่ 
(คือ, to_find[0] == '\0'). ถ้าเป็นเช่นนั้น, ฟังก์ชั่นคืนค่า pointer ที่ชี้ไปที่ตำแหน่งแรกของ str 
เพราะ substring ว่างเปล่าถือว่าถูกค้นพบที่ตำแหน่งแรกของ str.
วนลูปหลัก (Outer Loop):

วนลูปที่ใช้ตัวแปร i เพื่อเข้าถึงตัวอักษรแต่ละตัวใน str.
วนลูปภายใน (Inner Loop):

วนลูปที่ใช้ตัวแปร j เพื่อเข้าถึงตัวอักษรใน to_find.
ตรวจสอบว่า str[i + j] และ to_find[j] มีค่าเท่ากันและ str[i + j] ไม่เป็นตัว null ('\0'). ถ้าเป็นเช่น, ก็ดำเนินการต่อไป.
ตรวจสอบการค้นพบ Substring:

ถ้า to_find[j + 1] เป็นตัว null ('\0'), แสดงว่าทุกตัวอักษรใน to_find ถูกตรวจสอบและตรงกับ str ที่ตำแหน่งนั้น. 
ฟังก์ชั่นจึงคืนค่า pointer ที่ชี้ไปที่ตำแหน่งที่พบ substring.

ปรับเปลี่ยนตัวแปร:

ปรับค่าตัวแปร j และ i เพื่อเลื่อนตำแหน่งใน to_find และ str ตามลำดับ.
สิ้นสุดการวนลูป:

ทำซ้ำขั้นตอน 3-6 จนกว่าจะค้นพบ substring หรือจนกว่าจะสิ้นสุด string str.
คืนค่า:

ถ้าไม่พบ substring, ฟังก์ชั่นคืนค่า 0 เพื่อบ่งบอกว่า substring ไม่ถูกพบ.
ถ้าพบ substring, ฟังก์ชั่นคืนค่า pointer ที่ชี้ไปที่ตำแหน่งแรกของ substring ที่พบ.
ตัวอย่างการใช้งาน:

#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char to_find[] = "World";

    char *result = ft_strstr(str, to_find);

    if (result != 0) {
        printf("Substring found at position: %ld\n", result - str);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
ผลลัพธ์:

Substring found at position: 7

ในตัวอย่างนี้, substring "World" ถูกพบที่ตำแหน่งที่ 7 ใน string "Hello, World!".*/






