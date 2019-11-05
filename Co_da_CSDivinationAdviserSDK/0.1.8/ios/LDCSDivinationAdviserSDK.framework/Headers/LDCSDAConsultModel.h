//
//  LDCSDAConsultModel.h
//  LDCSDivinationAdviserSDK
//
//  Created by 邝路平 on 2019/9/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAConsultModel : NSObject

@property (nonatomic, copy) NSString *account_id;//    string    否    用户id
@property (nonatomic, copy) NSString *avatar;//    string    否    用户头像
@property (nonatomic, copy) NSString *birthday;//    date    否    用户生日
@property (nonatomic, assign) NSInteger consult_id;// int    否 咨询ID
@property (nonatomic, copy) NSString *desc;//    string    否    问题描述
@property (nonatomic, assign) NSInteger gender;//    int    否    性别
@property (nonatomic, copy) NSString *question;//    string    否    问题
@property (nonatomic, copy) NSString *image;//    string    否    上传图片链接
@property (nonatomic, copy) NSString *username;//    string    否    用户名
@property (nonatomic, copy) NSString *email;//    string    否   邮箱
@property (nonatomic, copy) NSString *is_public;//    string    否   是否公开

// 非服务器字段，用于标示什么时候创建的对话
@property (nonatomic,strong) NSDate *createTime;

@end

NS_ASSUME_NONNULL_END
