//
//  LDCSDADeviceInfoTool.h
//  LDCSDivinationAdviserSDK
//
//  Created by 邝路平 on 2019/9/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDADeviceInfoTool : NSObject

+ (NSString *)lDaccountId;

+ (NSString *)lDaid;

+ (NSString *)lDcountry;

+ (NSString *)lDlanguage;

+ (NSString *)lDversionCode;

+ (NSString *)lDversionName;

+ (NSNumber *)lDchannel;

+ (NSString *)lDbundleid;

+ (NSString *)lDsystemVersion;

+ (NSString *)lDgetPhoneModel;

+ (BOOL)lDisDebugMode;


@end

NS_ASSUME_NONNULL_END
