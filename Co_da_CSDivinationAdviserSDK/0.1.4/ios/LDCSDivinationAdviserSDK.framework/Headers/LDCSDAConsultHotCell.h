//
//  LDCSDAConsultHotCell.h
//  LDCSDivinationAdviserSDK-LDCSDA
//
//  Created by 邝路平 on 2019/10/23.
//

#import <UIKit/UIKit.h>
@class LDCSDAConsultChatModel;
NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAConsultHotCell : UITableViewCell

@property (nonatomic,strong) LDCSDAConsultChatModel *chatModel;
@property (nonatomic,copy) void(^checkHotMessageBlock)(NSString * message);

@end

NS_ASSUME_NONNULL_END
