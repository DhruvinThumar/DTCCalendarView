

#import <UIKit/UIKit.h>
@class DTCalendarCollectionView;


@protocol DTCalendarCollectionViewInternalDelegate <UICollectionViewDelegate>

@optional
- (void)collectionViewDidFinishLayoutSubviews:(DTCalendarCollectionView *)collectionView;

@end

@interface DTCalendarCollectionView : UICollectionView

@property (weak, nonatomic) id<DTCalendarCollectionViewInternalDelegate> internalDelegate;

@end
