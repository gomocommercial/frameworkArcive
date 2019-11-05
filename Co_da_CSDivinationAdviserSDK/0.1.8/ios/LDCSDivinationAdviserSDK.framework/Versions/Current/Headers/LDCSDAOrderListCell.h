//
//  LDCSDAOrderListCell.h
//  LDCSDivinationAdviserSDK
//
//  Created by 邝路平 on 2019/9/20.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class LDCSDAOrderListModel;

@interface LDCSDAOrderListCell : UITableViewCell

@property (nonatomic,strong) LDCSDAOrderListModel *orderListModel;

@property (nonatomic,copy) void(^payBlock)(LDCSDAOrderListModel *orderListModel);

- (BOOL)canResetModelListWithTimeOffset:(NSInteger)offset;

+ (CGFloat)cellHeight;

+ (NSString *)CountDownTimeWithInterval:(NSInteger)interval;

@end

NS_ASSUME_NONNULL_END
