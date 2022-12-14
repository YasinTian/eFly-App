//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKCPImageResultOptions.h"

@class NSMutableArray, TuSDKWaterMarkOption;

@interface TuSDKPFEditMultipleOptions : TuSDKCPImageResultOptions
{
    _Bool _limitForScreen;
    _Bool _disableStepsSave;
    Class _viewClazz;
    unsigned long long _limitSideSize;
    TuSDKWaterMarkOption *_waterMarkOption;
    NSMutableArray *_modules;
}

@property(retain, nonatomic) NSMutableArray *modules; // @synthesize modules=_modules;
@property(retain, nonatomic) TuSDKWaterMarkOption *waterMarkOption; // @synthesize waterMarkOption=_waterMarkOption;
@property(nonatomic) _Bool disableStepsSave; // @synthesize disableStepsSave=_disableStepsSave;
@property(nonatomic) _Bool limitForScreen; // @synthesize limitForScreen=_limitForScreen;
@property(nonatomic) unsigned long long limitSideSize; // @synthesize limitSideSize=_limitSideSize;
@property(retain, nonatomic) Class viewClazz; // @synthesize viewClazz=_viewClazz;
- (void).cxx_destruct;
- (id)viewController;
- (Class)defaultComponentClazz;
- (void)disableModule:(long long)arg1;
- (void)initOptions;

@end

