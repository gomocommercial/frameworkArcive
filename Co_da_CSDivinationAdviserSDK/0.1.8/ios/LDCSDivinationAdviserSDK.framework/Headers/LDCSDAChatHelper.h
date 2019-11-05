//
//  LDCSDAChatHelper.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/10/24.
//

#import <Foundation/Foundation.h>
@class LDCSDAConsultChatModel;
@class LDCSDAConsultReplyModel;

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAChatHelper : NSObject

//老师招呼语
+ (LDCSDAConsultChatModel *)getAdvisorSalutationChat:(LDCSDAConsultReplyModel *)model;

//老师招呼视频
+ (LDCSDAConsultChatModel *)getAdvisorSalutationVideoChat:(LDCSDAConsultReplyModel *)model;

//热点问题
+ (LDCSDAConsultChatModel *)getHotQuestionsChat;

//补全问题
+ (LDCSDAConsultChatModel *)getFillMessageChat:(LDCSDAConsultReplyModel *)model;

//历史问题
+ (LDCSDAConsultChatModel *)getHistoryQuestionsChat:(LDCSDAConsultReplyModel *)model;

//老师视频回复
+ (LDCSDAConsultChatModel *)getAdivisorVideoChat:(LDCSDAConsultReplyModel *)model;

//老师回复
+ (LDCSDAConsultChatModel *)getAdivisorReplyMessageChat:(LDCSDAConsultReplyModel *)model;

//老师自定义信息回复
+ (LDCSDAConsultChatModel *)getAdivisorMessageChat:(LDCSDAConsultReplyModel *)model Chat:(NSString *)chatStr;

//用户信息回复
+ (LDCSDAConsultChatModel *)getCustomMessageChat:(NSString *)chatStr;

@end

NS_ASSUME_NONNULL_END
