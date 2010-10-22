/*  This file is part of mhmake.
 *
 *  Copyright (C) 2001-2010 marha@sourceforge.net
 *
 *  Mhmake is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Mhmake is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Mhmake.  If not, see <http://www.gnu.org/licenses/>.
*/

/* $Rev$ */

#ifndef __RULE_H__
#define __RULE_H__

#include "refptr.h"
#include "md5.h"
class mhmakeparser;
class fileinfo;

class rule: public refbase
{
  vector<string> m_Commands;
  string m_Stem;   // Contains the stem in case the rule is part of an implicit rule (filled in in the implicit search)
  mhmakeparser* m_pMakefile;
  vector< fileinfo* > m_Targets;  /* Targets that are build with this rule, do not use refptr here because otherwise we get circular references */
public:
  rule(mhmakeparser *pMakefile): m_pMakefile(pMakefile)
  {
  }

  void AddCommand(const string &Command)
  {
    if (!Command.empty())
      m_Commands.push_back(Command);
  }
  vector<string>& GetCommands()
  {
    return m_Commands;
  }
  void PrintCommands(fileinfo *pTarget=NULL) const;

  void SetStem(const string &Stem)
  {
    m_Stem=Stem;
  }
  const string &GetStem() const
  {
    return m_Stem;
  }
  void SetMakefile(mhmakeparser *pMakefile)
  {
    m_pMakefile=pMakefile;
  }
  mhmakeparser *GetMakefile()
  {
    return m_pMakefile;
  }
  bool operator != (const rule &Rule);

  void AddTarget(fileinfo *pTarget)
  {
    m_Targets.push_back(pTarget);
  }
  void SetTargetsIsBuild(uint32 Md5_32);
  void SetTargetsIsBuilding(const fileinfo *pSrc);
};

class IMPLICITRULE
{
  static vector<pair<fileinfo *, vector<pair< fileinfo *,refptr<rule> > > > > m_ImplicitRules;  // Use a vector and not a map because the order of the implicit rules is important
public:
  static void AddImplicitRule(fileinfo *pTarget,const vector<fileinfo*> &Deps,refptr<rule> pRule);
  static void SearchImplicitRule(const fileinfo *pTarget,vector< pair<fileinfo*,refptr<rule> > >&Result);
  static void PrintImplicitRules();
};

extern refptr<rule> NullRule;

#endif

