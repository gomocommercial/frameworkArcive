//
//  LDCSDABrowserController.h
//  LDCSDivinationAdviserSDK-LDCSDA
//
//  Created by 邝路平 on 2019/10/27.
//

#import "LDCSDABaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^SaveImageBlock)(BOOL success);

@interface LDCSDABrowserController : LDCSDABaseViewController

/* 设置了singleImage优先显示,urlArr传了数组也不显示 */
@property (nonatomic,strong) UIImage *singleImage;

/* 图片数组 */
@property (nonatomic,strong) NSArray <NSURL *>*urlArr;

/* 传图片数组的时候指定当前要显示哪张图片，默认为0第一张 */
@property (nonatomic,assign) NSInteger currentIndex;

/* 从哪个imageV进来 */
@property (nonatomic,strong) UIImageView *fromImageV;

/* 展示图片浏览器 */
- (void)show;


@property (nonatomic,strong) UICollectionView *collectionView;

@property (nonatomic, copy) SaveImageBlock saveImageBlock;
@property (nonatomic, strong, readonly) UIButton *favoriteButton;
@property (nonatomic, assign) BOOL isReport;

@end

NS_ASSUME_NONNULL_END
