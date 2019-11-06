//
//  LDCSDAUser.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/9/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAUser : NSObject

@property (nonatomic,copy) NSString *userID;
@property (nonatomic,copy) NSString *nickname;//昵称
@property (nonatomic,copy) NSURL *avatar;//头像
@property (nonatomic,copy) NSString *accessToken;//token
@property (nonatomic,assign) float balance;//余额
@property (nonatomic,copy) NSString *userType;

+ (NSString *)randomNickname;
+ (NSString *)randomAvatar;

- (NSString *)lDGetUserTopic;

@end

NS_ASSUME_NONNULL_END
