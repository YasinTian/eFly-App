//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKCPImageResultOptions.h"

@class NSArray;

@interface TuSDKPFEditCuterOptions : TuSDKCPImageResultOptions
{
    _Bool _enableTrun;
    _Bool _enableMirror;
    _Bool _onlyReturnCuter;
    Class _viewClazz;
    long long _ratioType;
    NSArray *_ratioTypeList;
}

@property(nonatomic) _Bool onlyReturnCuter; // @synthesize onlyReturnCuter=_onlyReturnCuter;
@property(retain, nonatomic) NSArray *ratioTypeList; // @synthesize ratioTypeList=_ratioTypeList;
@property(nonatomic) long long ratioType; // @synthesize ratioType=_ratioType;
@property(nonatomic) _Bool enableMirror; // @synthesize enableMirror=_enableMirror;
@property(nonatomic) _Bool enableTrun; // @synthesize enableTrun=_enableTrun;
@property(retain, nonatomic) Class viewClazz; // @synthesize viewClazz=_viewClazz;
- (void).cxx_destruct;
- (id)viewController;
- (Class)defaultComponentClazz;

@end

