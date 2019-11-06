//
//  NSString+LDCSDAString.h
//  LDCSDivinationAdviserSDK
//
//  Created by Zy on 2019/9/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (LDCSDAString)

+ (NSString *)lDlocalizedStringForKey:(NSString *)key;

- (NSString *)lDhmacSHA256StrAndBase64WithKey:(NSString *)key;

- (NSString *)lDurlSafeStr;

+ (NSData*)lDsafeUrlBase64Decode:(NSString*)safeUrlbase64Str;


/**
 字符串加密
 
 @param key 秘钥
 @param keyNeedBase64 秘钥是否需要base64编码
 @return 结果
 */
- (NSData *)lDencryptUseDES2WithKey:(NSString *)key keyBase64:(BOOL)keyNeedBase64;

/**
 des解密
 
 @param cipherData 解密数据
 @param key 秘钥
 @param keyNeedBase64 s秘钥是否需要base64编码
 @return 结果
 */
+ (NSString *)lDdecryptUseDES:(NSData *)cipherData key:(NSString *)key keyNeedBase64:(BOOL)keyNeedBase64 urlPath:(NSString *)urlPath;


- (NSMutableAttributedString *)attributedStrWithLineHeight:(CGFloat)lineHeight;

@end

NS_ASSUME_NONNULL_END
