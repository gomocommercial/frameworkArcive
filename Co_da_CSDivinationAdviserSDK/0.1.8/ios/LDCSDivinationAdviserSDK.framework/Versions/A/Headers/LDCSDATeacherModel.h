//
//  LDCSDATeacherModel.h
//  LDCSDivinationAdviserSDK
//
//  Created by 邝路平 on 2019/9/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDATeacherModel : NSObject

//列表页 和 详情页公用
@property (nonatomic, copy) NSString *avatar;//    String    否    老师图片
@property (nonatomic, copy) NSString *image;//    String    否    老师图片
@property (nonatomic, copy) NSString *username;//    String    否    老师姓名
@property (nonatomic, copy) NSString *skills;//    String    否    老师技能(^隔开)
@property (nonatomic, assign) NSInteger working_years;//    int    否    从业年限
@property (nonatomic, assign) NSInteger readership;//    int    否    服务人数
@property (nonatomic, assign) NSInteger state;//    int    否    是否在线，0：服务不可用，1：服务可用
@property (nonatomic, copy) NSString *advisor_code;//    String    否    老师标识ID


//老师详情页 接口用
@property (nonatomic, copy) NSString *languages;//   String    语言(^隔开)
@property (nonatomic, copy) NSString *specialties;//    String    擅长主题(^隔开)
@property (nonatomic, copy) NSString *introduction;//    String    个人介绍
@property (nonatomic, assign) float price;//    decimal(10,2)    价格，单位：美金，保留两位小数
@property (nonatomic, copy) NSString *introduction_video; //老师个人视频介绍


//本地增加
@property (nonatomic,copy) NSString *introductionShort; // 老师招呼语

@end

NS_ASSUME_NONNULL_END
