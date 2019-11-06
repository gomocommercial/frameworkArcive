//
//  LDCSDAGenderView.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/10/12.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAGenderView : UIView

@property (nonatomic,strong,readonly) NSString *lDgenderStr;

@property (nonatomic,assign,readonly) NSInteger lDgenderIndex;

@property (nonatomic,copy) void(^selectGenderBlock)(NSString *genderStr);

@property (nonatomic,assign,readonly) BOOL lDhasEdit;

@end

NS_ASSUME_NONNULL_END
