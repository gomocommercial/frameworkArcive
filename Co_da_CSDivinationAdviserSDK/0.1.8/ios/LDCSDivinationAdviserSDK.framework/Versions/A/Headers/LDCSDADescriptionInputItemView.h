//
//  LDCSDADescriptionInputItemView.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/10/12.
//

#import <UIKit/UIKit.h>
#import "LDCSDAPlaceHolderTextView.h"

NS_ASSUME_NONNULL_BEGIN

static NSInteger const lDdescriptionWordLimit = 2000;

@interface LDCSDADescriptionInputItemView : UIView

@property (nonatomic,strong) NSString *lDTitleStr;
@property (nonatomic,strong) UILabel *lDNumLb;
@property (nonatomic,strong) UILabel *lDDescriptionLb;
@property (nonatomic,strong) NSString *lDTfPlaceHolderStr;
@property (nonatomic,strong,readonly) LDCSDAPlaceHolderTextView *lDtextView;
@property (nonatomic,copy) void(^tVEndEditingBlock)(NSString *tVStr);
@property (nonatomic,copy) void(^tVTextChangeBlock)(NSString *tVStr);

@property (nonatomic,assign) BOOL lDNeedWordLimit;

@property (nonatomic,assign) CGFloat lDMinHeight;

@end

NS_ASSUME_NONNULL_END
