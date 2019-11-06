//
//  LDCSDAPickerViewController.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/10/12.
//

#import "LDCSDABaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, LDDatePickerViewType) {
    LDDatePickerViewTypeDate,
    LDDatePickerViewTypeGender,
};

@interface LDCSDAPickerViewController : LDCSDABaseViewController

@property (nonatomic,assign,readonly) CGFloat contentH;

@property (nonatomic, copy) void(^cancelBlock)(void);

@property (nonatomic, copy) void(^didSelectedBlock)(NSString *dateStr);

- (instancetype)initWithType:(LDDatePickerViewType)type;

- (void)show;

@end

NS_ASSUME_NONNULL_END
