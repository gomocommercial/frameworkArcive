//
//  LDCSDAOrderListView.h
//  LDCSDivinationAdviserSDK
//
//  Created by 邝路平 on 2019/9/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, LDCSDAOrderType) {
    LDCSDAOrderType_Unpaid = 1,
    LDCSDAOrderType_WaitingReply,
    LDCSDAOrderType_Finished,
    LDCSDAOrderType_Refunded,
};

@interface LDCSDAOrderListView : UIView

@property (nonatomic,assign) LDCSDAOrderType orderType;

@end

NS_ASSUME_NONNULL_END

