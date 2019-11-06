//
//  NSBundle+LDCSGiftBundle.h
//  LDCSGiftSDK
//
//  Created by qiaoming on 2019/3/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSBundle (LDCSDABundle)

//返回资源文件的bundle
+(NSBundle *)lDgetDABundlePath;

//读取资源文件的多语言文案
+ (NSString *)lDlocalizedStringForKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
