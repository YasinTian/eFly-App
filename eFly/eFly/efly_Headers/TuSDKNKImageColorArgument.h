//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKDataJson.h"

@interface TuSDKNKImageColorArgument : TuSDKDataJson
{
    float _maxR;
    float _maxG;
    float _maxB;
    float _maxY;
    float _minR;
    float _minG;
    float _minB;
    float _minY;
    float _midR;
    float _midG;
    float _midB;
}

@property(nonatomic) float midB; // @synthesize midB=_midB;
@property(nonatomic) float midG; // @synthesize midG=_midG;
@property(nonatomic) float midR; // @synthesize midR=_midR;
@property(nonatomic) float minY; // @synthesize minY=_minY;
@property(nonatomic) float minB; // @synthesize minB=_minB;
@property(nonatomic) float minG; // @synthesize minG=_minG;
@property(nonatomic) float minR; // @synthesize minR=_minR;
@property(nonatomic) float maxY; // @synthesize maxY=_maxY;
@property(nonatomic) float maxB; // @synthesize maxB=_maxB;
@property(nonatomic) float maxG; // @synthesize maxG=_maxG;
@property(nonatomic) float maxR; // @synthesize maxR=_maxR;
- (void)deserializationWithJson:(id)arg1;

@end

