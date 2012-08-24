#define UNICODE_THAI_MAI_HAN_AKAT  0x0E31
#define UNICODE_THAI_SARA_AM       0x0E33
#define UNICODE_THAI_SARA_I        0x0E34
#define UNICODE_THAI_SARA_II       0x0E35
#define UNICODE_THAI_SARA_UE       0x0E36
#define UNICODE_THAI_SARA_UEE      0x0E37
#define UNICODE_THAI_SARA_U        0x0E38
#define UNICODE_THAI_SARA_UU       0x0E39
#define UNICODE_THAI_PHINTHU       0x0E3A
#define UNICODE_THAI_LAKKHANGYAO   0x0E45
#define UNICODE_THAI_MAITAIKHU     0x0E47
#define UNICODE_THAI_MAI_EK        0x0E48
#define UNICODE_THAI_MAI_THO       0x0E49
#define UNICODE_THAI_MAI_TRI       0x0E4A
#define UNICODE_THAI_MAI_CHATTA_WA 0x0E4B
#define UNICODE_THAI_THANTHAKHAT   0x0E4C
#define UNICODE_THAI_NIKHAHIT      0x0E4D
#define UNICODE_THAI_YAMAKKAN      0x0E4E
	       
int is_thai_dependent(int c)
{
	return c == UNICODE_THAI_MAI_HAN_AKAT  ||  /* 0x0E31 */
	       c == UNICODE_THAI_SARA_AM       ||  /* 0x0E33 */
	       c == UNICODE_THAI_SARA_I        ||  /* 0x0E34 */
	       c == UNICODE_THAI_SARA_II       ||  /* 0x0E35 */
	       c == UNICODE_THAI_SARA_UE       ||  /* 0x0E36 */
	       c == UNICODE_THAI_SARA_UEE      ||  /* 0x0E37 */
	       c == UNICODE_THAI_SARA_U        ||  /* 0x0E38 */
	       c == UNICODE_THAI_SARA_UU       ||  /* 0x0E39 */
	       c == UNICODE_THAI_PHINTHU       ||  /* 0x0E3A */
	       c == UNICODE_THAI_LAKKHANGYAO   ||  /* 0x0E45 */
	       c == UNICODE_THAI_MAITAIKHU     ||  /* 0x0E47 */
	       c == UNICODE_THAI_MAI_EK        ||  /* 0x0E48 */
	       c == UNICODE_THAI_MAI_THO       ||  /* 0x0E49 */
	       c == UNICODE_THAI_MAI_TRI       ||  /* 0x0E4A */
	       c == UNICODE_THAI_MAI_CHATTA_WA ||  /* 0x0E4B */
	       c == UNICODE_THAI_THANTHAKHAT   ||  /* 0x0E4C */
	       c == UNICODE_THAI_NIKHAHIT      ||  /* 0x0E4D */
	       c == UNICODE_THAI_YAMAKKAN;         /* 0x0E4E */
}
	       
int is_thai_dependent2(int c)
{
	c -= 0xE00;
	return c == (UNICODE_THAI_MAI_HAN_AKAT  - 0xE00) ||
	       c == (UNICODE_THAI_SARA_AM       - 0xE00) ||
	       c == (UNICODE_THAI_SARA_I        - 0xE00) ||
	       c == (UNICODE_THAI_SARA_II       - 0xE00) ||
	       c == (UNICODE_THAI_SARA_UE       - 0xE00) ||
	       c == (UNICODE_THAI_SARA_UEE      - 0xE00) ||
	       c == (UNICODE_THAI_SARA_U        - 0xE00) ||
	       c == (UNICODE_THAI_SARA_UU       - 0xE00) ||
	       c == (UNICODE_THAI_PHINTHU       - 0xE00) ||
	       c == (UNICODE_THAI_LAKKHANGYAO   - 0xE00) ||
	       c == (UNICODE_THAI_MAITAIKHU     - 0xE00) ||
	       c == (UNICODE_THAI_MAI_EK        - 0xE00) ||
	       c == (UNICODE_THAI_MAI_THO       - 0xE00) ||
	       c == (UNICODE_THAI_MAI_TRI       - 0xE00) ||
	       c == (UNICODE_THAI_MAI_CHATTA_WA - 0xE00) ||
	       c == (UNICODE_THAI_THANTHAKHAT   - 0xE00) ||
	       c == (UNICODE_THAI_NIKHAHIT      - 0xE00) ||
	       c == (UNICODE_THAI_YAMAKKAN      - 0xE00);
}
