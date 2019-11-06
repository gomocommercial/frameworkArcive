//
//  LDCSDAAlertView.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/10/12.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, LDAlertViewButtonType) {
    LDAlertViewButtonTypeDefault,
    LDAlertViewButtonTypeBold,
};

typedef void (^LDTouchUpInsideBlock)(void);

@interface LDCSDAAlertView : UIView

- (instancetype)initWithTitle:(NSString *)title message:(NSObject *)message;

- (void)addButton:(NSString *)title type:(LDAlertViewButtonType)type actionBlock:(LDTouchUpInsideBlock)block;

- (void)show;

@end

NS_ASSUME_NONNULL_END
