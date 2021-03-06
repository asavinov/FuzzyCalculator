#define IDM_ABOUT		100
#define IDD_SPARAM		101
#define IDD_0 	     	200
#define IDD_1		  	201
#define IDD_2			202
#define IDD_3			203
#define IDD_4			204
#define IDD_5			205
#define IDD_6			206
#define IDD_7			207
#define IDD_8			208
#define IDD_9			209
#define IDD_CLEAR       210
#define IDD_BACKSPACE	211
#define IDD_OUTPUT	    212
#define IDD_EQUAL	    213
#define IDD_MULTIPLY	214
#define IDD_DEVIDE		215
#define IDD_SUM	    	216
#define IDD_MINUS		217
#define IDD_POINT		218
#define IDD_SCROLL		223

#define BMP_NORMAL      1000
#define BMP_PRESSED     2000

//
// Fuzzy Arithmetics declarations
//
double Logarithm ( double s, double a );
double FuzzyMult ( double x, double y );
double FuzzyDiv ( double x, double y );
double FuzzySum ( double x, double y );
double FuzzySub ( double x, double y );

extern double  SParameter;
