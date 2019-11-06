//
//  LDCSDAInputItemView.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/10/12.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

static NSInteger const LDInputItemViewWordLimit = 200;

@interface LDCSDAInputItemView : UIView

@property (nonatomic,strong) NSString *lDTitleStr;
@property (nonatomic,strong) NSString *lDTfPlaceHolderStr;
@property (nonatomic,strong,readonly) UITextField *lDtextTf;
@property (nonatomic,assign) BOOL lDNeedWordLimit;

@property (nonatomic,copy) void(^lDTfEndEditingBlock)(NSString *tfStr);

@end

NS_ASSUME_NONNULL_END
