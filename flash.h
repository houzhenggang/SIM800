#ifndef __FLASH_H
#define __FLASH_H

//#define calibration_Page_63  0x0800FC00 // ��������� �������� ���� ������
// � ��������� ������� ��������� ���� ������ ������������� ������ ������ ���������� ���������� ������ ��������� � ������ SMS ��������� ��������
// ������ � ������ ������� � ������ �������� 4-� �����.



// ��� ������ ������� ��������� ������� ��������� �������� ��������� � ����� �������� ���� ������
#define start_DATA_Page_60  0x0800F000 // ������ ��������� � ����� �������� ���� ������, ���� ����� ������������ ������ ���������� ������� ������� ���������
#define end_DATA_Page_60    0x0800F3FF // ����� ��������� � ����� �������� ���� ������, ���� ����� ������������ ������ ���������� ������� ������� ���������


#define PAGE_SIZE_8   0x00000400 // ������ �������� ���� ������ � ������ (1 �������� = 1024 �����)
#define PAGE_SIZE_32  0x00000100 // ������ �������� ���� ������ � 32-� ������ ������ (1 �������� = 256 32-� ������ ����)
#define MAX_SIZE_STRING      128 // ������������ ������ ������ (�� �� ������ ������-������)������������ 128 ������ (���������), ����� � ���� �������� ���� ������ ���������� 8 �����
#define MAX_SIZE_STRING_32   32  // ������������ ������ ������ � 32-� ������ �������������
#define NUM_OF_CELL_STR 8        // � 1024 ������ ����� �������� ���� ���������� 8-�� 128 ������� ����� ��������� ���������


// ��� ������ ���������������� ������� ��������� SMS � ������� ��������� �������� �� ����� �� 24 ������ ���������� ��������� ��� �������� ���� ������
#define start_DATA_Page_61  0x0800F400 // ������ ������ � ����� �������� ���� ������, ���� ����� ������������ ��������� ��������� SMS
#define end_DATA_Page_61    0x0800F7FF // ����� ������ � ����� �������� ���� ������, ���� ����� ������������ ��������� ��������� SMS

#define start_DATA_Page_62  0x0800F800 // ������ ������ � ����� �������� ���� ������, ���� ����� ������������ ��������� ��������� SMS
#define end_DATA_Page_62    0x0800FBFF // ����� ������ � ����� �������� ���� ������, ���� ����� ������������ ��������� ��������� SMS

#define start_DATA_Page_63  0x0800FC00 // ������ ��������� 63-�� �������� ���� ������, ���� ����� ������������ ��������� ��������� SMS
#define end_DATA_Page_63    0x0800FFFF // ����� ��������� 63-�� �������� ���� ������, ���� ����� ������������ ��������� ��������� SMS

#define NUM_OF_STR_PAGE     3          // ����� ������� ���� ���������� ��� ���������� ����� ��������� ���������

// � ������ �������� ���������� 8 ����� �� 128 �������� � ������ (������������ ��� SMS ���������� 140 8-�� ������� ���������, �� �� �� ������������ 128 ��� ��������)
// ����� 24 ������ �� 24 ���������� �����

uint32_t FLASH_Read(uint32_t address); // ������ 32-� ������� ����� �� ���� ������ �� ��������� ������

uint8_t FLASH_Read_String(uint32_t page, uint8_t string_cell, uint8_t * data_string, uint32_t size); // ������� ������ ������ �� ����

uint8_t FLASH_Write_String(uint32_t page, uint8_t string_cell, uint8_t * data_string, uint32_t size); // ������� ������ ������ �� ����

void FLASH_Write_Default_String(void); // ������� �������������� ��������� ��������� ��������� � �������-�������

#endif /* __FLASH_H */
