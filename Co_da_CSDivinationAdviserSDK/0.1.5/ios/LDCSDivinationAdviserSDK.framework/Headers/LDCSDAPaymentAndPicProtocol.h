//
//  LDCSDAPaymentAndPicProtocol.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/10/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol LDCSDAPaymentAndPicProtocol <NSObject>

// 支付
-(void)lDpaymentDidPayWithProductId:(NSString *)productId;

// 图片上传
-(void)lDpictureDidUploadWithImage:(UIImage *)image Completion:(void(^)(BOOL isSuccess,NSString *imageUrl))completion;


@end

NS_ASSUME_NONNULL_END
