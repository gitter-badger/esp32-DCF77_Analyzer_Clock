#define float_r1 90.0 // inner ring
#define float_r2 112.0 // outer ring
#define float_r3 78.0 // inner 10's mark
#define float_r4 66.0 // inner 10's label*/
#define int_ringLedRadius 4
#define RTCTimeYPos 72
#define RTCDateYPos 150
#define displayRotation 1
#define scrollSpeed 2 // pixels offset by scroll cycle
// some extra named colors
#define TFT_BLACKISH  tft.color565( 0x0f, 0x0f, 0x0f )
#define TFT_UGRAY     tft.color565( 0xdd, 0xdd, 0xdd ) // 87%
#define TFT_LIGHTGRAY tft.color565( 0x88, 0x88, 0x88 ) // 75%
#define TFT_GRAY      tft.color565( 0x44, 0x44, 0x44 ) // 25%
#define TFT_DARKGRAY  tft.color565( 0x22, 0x22, 0x22 ) // 12%
#define TFT_BLUEGRAY  tft.color565( 0x22, 0x22, 0x44 )
#define TFT_DARKRED   tft.color565( 0xBB, 0x00, 0x00 )
#define TFT_GREENISH  tft.color565( 0x00, 0xdd, 0x00 )

static uint16_t DCFBitBufferYPos = 8;
static uint16_t CETCESTYPos      = 209;
static uint16_t LeapYearYpos     = 192;
static uint16_t WeekNumberYpos   = 158;
static uint16_t WeekDayNamesXpos = 259;
static uint16_t WeekDayNamesYpos = 224;
static uint16_t WeekDayLedYpos   = 216;

// text styles
TextStyle *myRTCDateTimeTextStyleOK = new TextStyle( 0xccffccU, 0x222222U, 1, 1, middle_center, false,  true );
TextStyle *myRTCDateTimeTextStyleKO = new TextStyle( 0xff8888U, 0x222222U, 1, 1, middle_center, false,  true );
TextStyle *myRTCDateTimeTextStyleNA = new TextStyle( 0xddddddU, 0x222222U, 1, 1, middle_center, false,  true );
TextStyle *RingLabelsTextStyle      = new TextStyle( 0x888888U, 0x222222U, 1, 1, middle_center, false,  true );
TextStyle *ErrorsCountStyleOK       = new TextStyle( 0x00ff00U, 0x222222U, 1, 1, top_left, false, true );
TextStyle *ErrorsCountStyleKO       = new TextStyle( 0xff0000U, 0x222222U, 1, 1, top_left, false, true );
TextStyle *LedDCFStatusStyleOK      = new TextStyle( 0x00ff00U, 0x222222U, 1, 1, top_left, false, true );
TextStyle *LedDCFStatusStyleKO      = new TextStyle( 0xff0000U, 0x222222U, 1, 1, top_left, false, true );
TextStyle *LedParityStatusStyleNA   = new TextStyle( 0x888888U, 0x222222U, 1, 1, top_left, false, true );
TextStyle *LedParityStatusStyleOK   = new TextStyle( 0x00ff00U, 0x222222U, 1, 1, top_left, false, true );
TextStyle *LedParityStatusStyleKO   = new TextStyle( 0xff0000U, 0x222222U, 1, 1, top_left, false, true );
TextStyle *LedErrorStatusStyleGray  = new TextStyle( 0x444444U, 0x222222U, 1, 1, top_left, false, true );
TextStyle *LedErrorStatusStyleRed   = new TextStyle( 0xff0000U, 0x222222U, 1, 1, top_left, false, true );
TextStyle *LedErrorStatusStyleGreen = new TextStyle( 0x00ff00U, 0x222222U, 1, 1, top_left, false, true );
TextStyle *LedWeekStatusStyle       = new TextStyle( 0x888888U, 0xffffffU, 1, 1, top_left, false, true );
TextStyle *LedDisplayStylePingtime  = new TextStyle( 0xffa500U, 0x222222U, 1, 1, top_left, false, true );
TextStyle *LedDisplayStyleLeftover  = new TextStyle( 0xffff00U, 0x222222U, 1, 1, top_left, false, true );
TextStyle *myTimerStyle             = new TextStyle( 0xddddddU, 0x222222U, 1, 1, middle_center, false, true );
TextStyle *scrollStyleEnabled       = new TextStyle( 0x444444U, 0x0f0f0fU, 1, 1, middle_center, false, true );
TextStyle *scrollStyleDisabled      = new TextStyle( 0x222222U, 0x0f0f0fU, 1, 1, middle_center, false, true );

// text styles aliases
TextStyle *myRTCDateTimeTextStyle   = myRTCDateTimeTextStyleNA;
TextStyle *ErrorsCountStyle         = ErrorsCountStyleOK;
TextStyle *LedDCFStatusStyle        = LedDCFStatusStyleOK;
TextStyle *LedParityStatusStyle     = LedParityStatusStyleNA;
TextStyle *LedErrorStatusStyle      = LedErrorStatusStyleGray;
TextStyle *LedDisplayStyle          = LedDisplayStylePingtime;
TextStyle *scrollStyle              = scrollStyleDisabled;

// font styles
FontStyle *myRTCDateFontStyle       = new FontStyle( &fonts::Font0, myRTCDateTimeTextStyle ); //
FontStyle *myRTCTimeFontStyle       = new FontStyle( &fonts::Font0, myRTCDateTimeTextStyle ); //
FontStyle *RingLabelsFontStyle      = new FontStyle( &Picopixel,    RingLabelsTextStyle );
FontStyle *ErrorsCountFontStyle     = new FontStyle( &Picopixel,    ErrorsCountStyle );
FontStyle *LedDCFStatusFontStyle    = new FontStyle( &Picopixel,    LedDCFStatusStyle );
FontStyle *LedParityStatusFontStyle = new FontStyle( &Picopixel,    LedParityStatusStyle );
FontStyle *LedErrorStatusFontStyle  = new FontStyle( &Picopixel,    LedErrorStatusStyle ); //
FontStyle *LedWeekStatusFontStyle   = new FontStyle( &Picopixel,    LedWeekStatusStyle );
FontStyle *LedDisplayFontStyle      = new FontStyle( &Picopixel,    LedDisplayStyle );
FontStyle *myTimerFontStyle         = new FontStyle( &fonts::Font0, myTimerStyle );
FontStyle *scrollFontStyle          = new FontStyle( &fonts::Font2, scrollStyle );

// for weeknum/leap/cet/cest boxes
TextStyle *BoxStyleEnabled       = new TextStyle( 0x888888U, 0xffffffU, 1, 1, top_left, false, true );
TextStyle *BoxStyleDisabled      = new TextStyle( 0x222222U, 0x888888U, 1, 1, top_left, false, true );
FontStyle *BoxFontStylePicoEnabled  = new FontStyle( &Picopixel, BoxStyleEnabled );
FontStyle *BoxFontStylePicoDisabled = new FontStyle( &Picopixel, BoxStyleDisabled );
BoxStyle  *BoxSelected   = new BoxStyle( BoxStyleEnabled->back_rgb888,  BoxFontStylePicoEnabled );
BoxStyle  *BoxUnSelected = new BoxStyle( BoxStyleDisabled->back_rgb888, BoxFontStylePicoDisabled );


TextStyle *CountryCityStyleEnabled       = new TextStyle( 0x888888U, 0xffffffU, 1, 1, top_left, false, true );
TextStyle *CountryCityStyleDisabled      = new TextStyle( 0x222222U, 0x888888U, 1, 1, top_left, false, true );
FontStyle *CountryCityFontStylePicoEnabled  = new FontStyle( &fonts::Font0, CountryCityStyleEnabled );
FontStyle *CountryCityFontStylePicoDisabled = new FontStyle( &fonts::Font0, CountryCityStyleDisabled );

