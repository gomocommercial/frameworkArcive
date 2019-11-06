//
//  LDCSDAErrorView.h
//  LDCSDivinationAdviserSDK
//
//  Created by 邝路平 on 2019/9/23.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, LDCSDAErrorType) {
    LDCSDAErrorType_NoNetwork,  // 无网络
    LDCSDAErrorType_NoContent,  // 无内容
};

@interface LDCSDAErrorView : UIView

@property (nonatomic, copy) void(^lDrefreshClickBlock)(void);
@property (nonatomic,assign) LDCSDAErrorType errorType;

@end

NS_ASSUME_NONNULL_END
