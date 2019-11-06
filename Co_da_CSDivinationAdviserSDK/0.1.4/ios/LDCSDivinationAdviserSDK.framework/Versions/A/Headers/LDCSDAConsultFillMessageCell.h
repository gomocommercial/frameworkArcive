//
//  LDCSDAConsultFillMessageCell.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/10/23.
//

#import <UIKit/UIKit.h>
@class LDCSDAConsultChatModel;

NS_ASSUME_NONNULL_BEGIN


@interface LDCSDAConsultFillMessageCell : UITableViewCell

@property (nonatomic,strong) LDCSDAConsultChatModel *chatModel;

@property (nonatomic,copy) void(^fillMessageBlock)(LDCSDAConsultFillMessageCell * cell);

@property (nonatomic,copy) void(^avatarActionBlock)(LDCSDAConsultFillMessageCell *cell);

- (void)setBtnEnable:(BOOL)enable;

@end

NS_ASSUME_NONNULL_END
