//
//  LDCSDATeacherTypeModel.h
//  LDCSDivinationAdviserSDK-LDCSDA
//
//  Created by 邝路平 on 2019/9/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDATeacherTypeModel : NSObject

@property (nonatomic, assign) NSInteger advice_type_id;//  int    否 类型ID
@property (nonatomic, copy) NSString *advice_name;//    String    否    类型名称
@property (nonatomic, strong) NSArray *advisors;//    List    否    老师列表



@end

NS_ASSUME_NONNULL_END
