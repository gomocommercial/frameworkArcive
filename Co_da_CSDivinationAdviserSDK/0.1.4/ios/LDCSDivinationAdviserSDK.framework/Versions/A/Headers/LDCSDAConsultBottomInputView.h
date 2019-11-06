//
//  LDCSDAConsultBottomInputView.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/10/24.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAConsultBottomInputView : UIView

@property (nonatomic,copy) void(^sendMessageBlock)(NSString * string);

+ (CGFloat)bottomHeight;

@end

NS_ASSUME_NONNULL_END
