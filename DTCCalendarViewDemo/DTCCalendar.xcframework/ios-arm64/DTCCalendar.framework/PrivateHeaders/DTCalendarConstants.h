
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#pragma mark - Constants

CG_EXTERN CGFloat const DTCalendarStandardHeaderHeight;
CG_EXTERN CGFloat const DTCalendarStandardWeekdayHeight;
CG_EXTERN CGFloat const DTCalendarStandardMonthlyPageHeight;
CG_EXTERN CGFloat const DTCalendarStandardWeeklyPageHeight;
CG_EXTERN CGFloat const DTCalendarStandardCellDiameter;
CG_EXTERN CGFloat const DTCalendarStandardSeparatorThickness;
CG_EXTERN CGFloat const DTCalendarAutomaticDimension;
CG_EXTERN CGFloat const DTCalendarDefaultBounceAnimationDuration;
CG_EXTERN CGFloat const DTCalendarStandardRowHeight;
CG_EXTERN CGFloat const DTCalendarStandardTitleTextSize;
CG_EXTERN CGFloat const DTCalendarStandardSubtitleTextSize;
CG_EXTERN CGFloat const DTCalendarStandardWeekdayTextSize;
CG_EXTERN CGFloat const DTCalendarStandardHeaderTextSize;
CG_EXTERN CGFloat const DTCalendarMaximumEventDotDiameter;

UIKIT_EXTERN NSInteger const DTCalendarDefaultHourComponent;
UIKIT_EXTERN NSInteger const DTCalendarMaximumNumberOfEvents;

UIKIT_EXTERN NSString * const DTCalendarDefaultCellReuseIdentifier;
UIKIT_EXTERN NSString * const DTCalendarBlankCellReuseIdentifier;
UIKIT_EXTERN NSString * const DTCalendarInvalidArgumentsExceptionName;

CG_EXTERN CGPoint const CGPointInfinity;
CG_EXTERN CGSize const CGSizeAutomatic;

#if TARGET_INTERFACE_BUILDER
#define DTCalendarDeviceIsIPad NO
#else
#define DTCalendarDeviceIsIPad [[UIDevice currentDevice].model hasPrefix:@"iPad"]
#endif

#define DTCalendarStandardSelectionColor   FSColorRGBA(31,119,219,1.0)
#define DTCalendarStandardTodayColor       FSColorRGBA(198,51,42 ,1.0)
#define DTCalendarStandardTitleTextColor   FSColorRGBA(14,69,221 ,1.0)
#define DTCalendarStandardEventDotColor    FSColorRGBA(31,119,219,0.75)

#define DTCalendarStandardLineColor        [[UIColor lightGrayColor] colorWithAlphaComponent:0.30]
#define DTCalendarStandardSeparatorColor   [[UIColor lightGrayColor] colorWithAlphaComponent:0.60]

#define FSColorRGBA(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define DTCalendarInAppExtension [[[NSBundle mainBundle] bundlePath] hasSuffix:@".appex"]

#define DTCalendarFloor(c) floorf(c)
#define DTCalendarRound(c) roundf(c)
#define DTCalendarCeil(c) ceilf(c)
#define DTCalendarMod(c1,c2) fmodf(c1,c2)

#define DTCalendarHalfRound(c) (DTCalendarRound(c*2)*0.5)
#define DTCalendarHalfFloor(c) (DTCalendarFloor(c*2)*0.5)
#define DTCalendarHalfCeil(c) (DTCalendarCeil(c*2)*0.5)

#define DTCalendarUseWeakSelf __weak __typeof__(self) DTCalendarWeakSelf = self;
#define DTCalendarUseStrongSelf __strong __typeof__(self) self = DTCalendarWeakSelf;


#pragma mark - Deprecated

#define DTCalendarDeprecated(instead) DEPRECATED_MSG_ATTRIBUTE(" Use " # instead " instead")

static inline void DTCalendarSliceCake(CGFloat cake, NSInteger count, CGFloat *pieces) {
    CGFloat total = cake;
    for (int i = 0; i < count; i++) {
        NSInteger remains = count - i;
        CGFloat piece = DTCalendarRound(total/remains*2)*0.5;
        total -= piece;
        pieces[i] = piece;
    }
}



