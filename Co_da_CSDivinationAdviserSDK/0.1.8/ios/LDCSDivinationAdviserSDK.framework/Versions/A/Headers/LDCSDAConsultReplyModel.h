//
//  LDCSDAConsultReplyModel.h
//  LDCSDivinationAdviserSDK-LDCSDA
//
//  Created by 邝路平 on 2019/10/24.
//

#import <Foundation/Foundation.h>
@class LDCSDATeacherModel;

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAConsultReplyModel : NSObject

@property (nonatomic,strong) NSString *reply_text;  // 老师回复文本内容
@property (nonatomic,strong) NSString *reply_video; // 老师回复视频URL
@property (nonatomic,strong) NSString *reply_time;  // 老师回复时间戳

@property (nonatomic,strong) NSString *consult_image;   // 咨询图片
@property (nonatomic,strong) NSString *consult_question;  // 咨询问题
@property (nonatomic,strong) NSString *consult_description;  // 问题描述
@property (nonatomic,strong) NSString *advisor_avatar;  // 老师头像
@property (nonatomic,strong) NSString *advisor_username; // 老师姓名
@property (nonatomic,assign) NSInteger consult_time;  // 咨询时间戳
@property (nonatomic,strong) NSString *advisor_code; // 老师Id
@property (nonatomic,assign) float service_pricing; // 老师价钱
@property (nonatomic,assign) NSInteger advisor_state;   // 1：在线；2：离线

@property (nonatomic,copy) NSString *introductionShort; // 老师招呼语
@property (nonatomic,copy) NSString *introductionVideo; // 老师视频介绍


- (void)updateFromAdvisor:(LDCSDATeacherModel *)advisor;

- (LDCSDATeacherModel *)updateToTATeacherAdvisor;

@end

NS_ASSUME_NONNULL_END
