// 
// TiMobeelizerSdkEntityProxy.h
// 
// Copyright (C) 2012 Mobeelizer Ltd. All Rights Reserved.
//
// Mobeelizer SDK is free software; you can redistribute it and/or modify it 
// under the terms of the GNU Affero General Public License as published by 
// the Free Software Foundation; either version 3 of the License, or (at your
// option) any later version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or 
// FITNESS FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License
// for more details.
//
// You should have received a copy of the GNU Affero General Public License 
// along with this program; if not, write to the Free Software Foundation, Inc., 
// 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
// 

#import <Foundation/Foundation.h>
#import <MobeelizerSDK/MobeelizerSDK.h>
#import "TiProxy.h"

@interface TiMobeelizerSdkEntityProxy : TiProxy 

@property(atomic,readwrite,assign) NSString *model;
@property(atomic,readwrite,assign) NSString *guid;
@property(atomic,readwrite,assign) NSNumber *deleted;
@property(atomic,readwrite,assign) NSNumber *modified;
@property(atomic,readwrite,assign) NSNumber *conflicted;
@property(atomic,readwrite,assign) NSNumber *owner;
@property(atomic,readwrite,assign) NSNumber *group;

-(id)initWithDictionary:(NSDictionary *)dictionary;
-(id)initWithModel:(NSString *)model;
-(NSDictionary *)toDictionary;
-(void)fromDictionary:(NSDictionary *)dictionary;

@end