#define IS_UP_IOS8  ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

#define SCREEN_WIDTH ((([UIApplication sharedApplication].statusBarOrientation == UIInterfaceOrientationPortrait) || ([UIApplication sharedApplication].statusBarOrientation == UIInterfaceOrientationPortraitUpsideDown)) ? [[UIScreen mainScreen] bounds].size.width : [[UIScreen mainScreen] bounds].size.height)
#define SCREEN_HEIGHT ((([UIApplication sharedApplication].statusBarOrientation == UIInterfaceOrientationPortrait) || ([UIApplication sharedApplication].statusBarOrientation == UIInterfaceOrientationPortraitUpsideDown)) ? [[UIScreen mainScreen] bounds].size.height : [[UIScreen mainScreen] bounds].size.width)

#define INTERFACE_IS_PAD     ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
#define INTERFACE_IS_PHONE   ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone)

#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))

#define IS_IPHONE_4_OR_LESS (INTERFACE_IS_PHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5 (INTERFACE_IS_PHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (INTERFACE_IS_PHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (INTERFACE_IS_PHONE && SCREEN_MAX_LENGTH == 736.0)