//
//  LDCSDADefines.h
//  Pods
//
//  Created by Zy on 2019/9/18.
//

#import "NSString+LDCSDAString.h"
#import "UIImage+LDCSDAImage.h"
#import "LDCSDAConfig.h"


#ifndef LDCSDADefines_h
#define LDCSDADefines_h

#define LDCSDAString(key) [NSString lDlocalizedStringForKey:(key)]
#define LDCSDAImage(name) [UIImage lDdaImageWithName:(name)]
#define LDCSDAIsSmallScreen ([UIScreen mainScreen].bounds.size.width < 375)

#define LDCSDAColorHex(str) [UIColor lDCSDAColorWithHexString:str]
#define LDCSDAColorHexWithAlpha(color, a) [UIColor lDCSDAColorWithHexString:color alpha:a]

#define LDCSDA_SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define LDCSDA_SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define LDCSDA_dp(x) (LDCSDAIsSmallScreen ?  (x) / 375.0f * LDCSDA_SCREEN_WIDTH : x)
#define LDCSDA_px(x) (LDCSDAIsSmallScreen ?  (x) / 375.0f * LDCSDA_SCREEN_WIDTH / 2 : x / 2)
#define LDCSDA_WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;

//判断是否为iPad
#define LDCSDA_IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define LDCSDA_IsiPhoneXAll ([UIScreen mainScreen].bounds.size.height >= 812.0f && !(LDCSDA_IS_IPAD))

#define LDCSDABarAndNavBarHeight ((LDCSDA_IsiPhoneXAll)? (44 + 44): (20 + 44))
#define LDCSDASafeBottomHeight ((LDCSDA_IsiPhoneXAll)? (34): (0))
#define LDCSDAStatusBarHeight ((LDCSDA_IsiPhoneXAll)? (44): (22))

#define LDRandomColor   [UIColor colorWithRed:arc4random()%255/255.0 green:arc4random()%255/255.0 blue:arc4random()%255/255.0 alpha:1.0]

#define LDlog(fmt, ...) {\
    if ([LDCSDAConfig lDconfig].isEnableLog) {\
        NSLog((@"[LDCSDivinationAdviserSDK]%s," "[lineNum:%d]" fmt) , __FUNCTION__, __LINE__, ##__VA_ARGS__);\
    } else {}\
}


#endif /* LDCSDADefines_h */
