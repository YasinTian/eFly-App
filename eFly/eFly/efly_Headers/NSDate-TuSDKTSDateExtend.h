//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (TuSDKTSDateExtend)
+ (id)lsqDateFromRFC1123:(id)arg1;
- (id)lsqRfc1123String;
- (id)lsqWeekdayName;
- (id)lsqDateFormat:(id)arg1;
- (id)lsqGetCurrentLocal;
- (_Bool)lsqSameMonthWithDate:(id)arg1;
- (_Bool)lsqSameWeekWithDate:(id)arg1;
- (_Bool)lsqSameDayWithDate:(id)arg1;
- (id)lsqFollowingDay;
- (id)lsqPreviousDay;
- (id)lsqAssociateDayOfTheFollowingWeek;
- (id)lsqAssociateDayOfThePreviousWeek;
- (unsigned long long)lsqWeekOfDayInYear;
- (unsigned long long)lsqWeekOfDayInMonth;
- (unsigned long long)lsqNumberOfDaysInTheWeekInMonth;
- (id)lsqFirstDayOfTheWeekInTheMonth;
- (id)lsqFirstDayOfTheFirstWeekInFollowingMonth;
- (id)lsqFirstDayOfTheFollowingWeekInTheMonth;
- (id)lsqFirstDayOfTheLastWeekInPreviousMonth;
- (id)lsqFirstDayOfThePreviousWeekInTheMonth;
- (id)lsqFirstDayOfTheWeek;
- (unsigned long long)lsqNumberOfWeeksInMonth;
- (unsigned long long)lsqNumberOfDaysInMonth;
- (id)lsqAssociateDayOfTheFollowingMonth;
- (id)lsqAssociateDayOfThePreviousMonth;
- (id)lsqFirstDayOfTheFollowingMonth;
- (id)lsqFirstDayOfThePreviousMonth;
- (id)lsqLastDayOfTheMonth;
- (id)lsqFirstDayOfTheMonth;
- (id)lsqEndOfDay;
- (id)lsqBeginingOfDay;
- (unsigned long long)lsqWeek;
- (unsigned long long)lsqWeekday;
- (unsigned long long)lsqSecond;
- (unsigned long long)lsqMinute;
- (unsigned long long)lsqHour;
- (unsigned long long)lsqDay;
- (unsigned long long)lsqMonth;
- (unsigned long long)lsqYear;
- (long long)lsqWeekdayOrdinal;
- (id)lsqComponentsOfDay;
@end

