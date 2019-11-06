//
//  LDCSDAConsultImageCell.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/10/24.
//

#import <UIKit/UIKit.h>
@class LDCSDAConsultChatModel;

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAConsultImageCell : UITableViewCell

@property (nonatomic,strong) LDCSDAConsultChatModel *chatModel;

@property (nonatomic,copy) void(^videoPlayBlock)(NSString *videoUrl);
@property (nonatomic,copy) void(^browseBlock)(UIImageView *imageV, NSString *imageUrl);
@property (nonatomic,copy) void(^webImageComplete)(void);
@property (nonatomic,copy) void(^avatarActionBlock)(LDCSDAConsultImageCell *cell);

@end

NS_ASSUME_NONNULL_END
