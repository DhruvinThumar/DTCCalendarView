

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (DTCalendarExtensions)

@property (nonatomic) CGFloat fs_width;
@property (nonatomic) CGFloat fs_height;

@property (nonatomic) CGFloat fs_top;
@property (nonatomic) CGFloat fs_left;
@property (nonatomic) CGFloat fs_bottom;
@property (nonatomic) CGFloat fs_right;

@end


@interface CALayer (DTCalendarExtensions)

@property (nonatomic) CGFloat fs_width;
@property (nonatomic) CGFloat fs_height;

@property (nonatomic) CGFloat fs_top;
@property (nonatomic) CGFloat fs_left;
@property (nonatomic) CGFloat fs_bottom;
@property (nonatomic) CGFloat fs_right;

@end


@interface NSCalendar (DTCalendarExtensions)

- (nullable NSDate *)fs_firstDayOfMonth:(NSDate *)month;
- (nullable NSDate *)fs_lastDayOfMonth:(NSDate *)month;
- (nullable NSDate *)fs_firstDayOfWeek:(NSDate *)week;
- (nullable NSDate *)fs_lastDayOfWeek:(NSDate *)week;
- (nullable NSDate *)fs_middleDayOfWeek:(NSDate *)week;
- (NSInteger)fs_numberOfDaysInMonth:(NSDate *)month;

@end

@interface NSMapTable (DTCalendarExtensions)

- (void)setObject:(nullable id)obj forKeyedSubscript:(id<NSCopying>)key;
- (id)objectForKeyedSubscript:(id<NSCopying>)key;

@end

@interface NSCache (DTCalendarExtensions)

- (void)setObject:(nullable id)obj forKeyedSubscript:(id<NSCopying>)key;
- (id)objectForKeyedSubscript:(id<NSCopying>)key;

@end


@interface NSObject (DTCalendarExtensions)

#define IVAR_DEF(SET,GET,TYPE) \
- (void)fs_set##SET##Variable:(TYPE)value forKey:(NSString *)key; \
- (TYPE)fs_##GET##VariableForKey:(NSString *)key;
IVAR_DEF(Bool, bool, BOOL)
IVAR_DEF(Float, float, CGFloat)
IVAR_DEF(Integer, integer, NSInteger)
IVAR_DEF(UnsignedInteger, unsignedInteger, NSUInteger)
#undef IVAR_DEF

- (void)fs_setVariable:(id)variable forKey:(NSString *)key;
- (id)fs_variableForKey:(NSString *)key;

- (nullable id)fs_performSelector:(SEL)selector withObjects:(nullable id)firstObject, ... NS_REQUIRES_NIL_TERMINATION;

@end

NS_ASSUME_NONNULL_END
